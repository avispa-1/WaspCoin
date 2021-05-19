//
// Created by mechanic on 19/05/21.
//

#include "Blockchain.h"

Blockchain::Blockchain() //the first block to start the blockchain
{
    _vChain.emplace_back(Block(0,"Genesis Block"));
    _nDifficulty = 6;
}
 //now we add the code to actually add new blocks to the blockchain

 void Blockchain::AddBlock(Block bNew)
 {
    bNew.sPrevHash = _GetLastBlock().GetHash();
    bNew.MineBlock(_nDifficulty);
    _vChain.push_back(bNew);
 }

 Block Blockchain::_GetLastBlock() const
 {
    return _vChain.back();
 }
