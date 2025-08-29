#include <boost/test/unit_test.hpp>
#include <test/util/setup_common.h>
#include <validation.h>
#include <chainparams.h>
#include <test/qtumtests/precompiled_utils.h>
#include <test/qtumtests/data/add_G1_bls.json.h>
#include <test/qtumtests/data/fail_add_G1_bls.json.h>
#include <test/qtumtests/data/mul_G1_bls.json.h>
#include <test/qtumtests/data/fail_mul_G1_bls.json.h>
#include <test/qtumtests/data/msm_G1_bls.json.h>
#include <test/qtumtests/data/fail_msm_G1_bls.json.h>
#include <test/qtumtests/data/add_G2_bls.json.h>
#include <test/qtumtests/data/fail_add_G2_bls.json.h>
#include <test/qtumtests/data/mul_G2_bls.json.h>
#include <test/qtumtests/data/fail_mul_G2_bls.json.h>
#include <test/qtumtests/data/msm_G2_bls.json.h>
#include <test/qtumtests/data/fail_msm_G2_bls.json.h>

#include <span>

namespace BlsTest{

BOOST_FIXTURE_TEST_SUITE(bls_tests, TestChain100Setup)

BOOST_AUTO_TEST_CASE(checking_add_G1_bls){
    // Call add_G1_bls 0xb
    dev::eth::ChainOperationParams const& params = globalSealEngine->chainParams();
    dev::u256 blockNumber = m_node.chainman->ActiveChain().Tip()->nHeight;
    RunPrecompiledTests(add_G1_bls, add_G1_bls, params, blockNumber);
}

BOOST_AUTO_TEST_CASE(checking_fail_add_G1_bls){
    // Call add_G1_bls 0xb
    dev::eth::ChainOperationParams const& params = globalSealEngine->chainParams();
    dev::u256 blockNumber = m_node.chainman->ActiveChain().Tip()->nHeight;
    RunPrecompiledTests(add_G1_bls, fail_add_G1_bls, params, blockNumber);
}

BOOST_AUTO_TEST_CASE(checking_mul_G1_bls){
    // Call msm_G1_bls 0xc
    dev::eth::ChainOperationParams const& params = globalSealEngine->chainParams();
    dev::u256 blockNumber = m_node.chainman->ActiveChain().Tip()->nHeight;
    RunPrecompiledTests(msm_G1_bls, mul_G1_bls, params, blockNumber);
}

BOOST_AUTO_TEST_CASE(checking_fail_mul_G1_bls){
    // Call msm_G1_bls 0xc
    dev::eth::ChainOperationParams const& params = globalSealEngine->chainParams();
    dev::u256 blockNumber = m_node.chainman->ActiveChain().Tip()->nHeight;
    RunPrecompiledTests(msm_G1_bls, fail_mul_G1_bls, params, blockNumber);
}

BOOST_AUTO_TEST_CASE(checking_msm_G1_bls){
    // Call msm_G1_bls 0xc
    dev::eth::ChainOperationParams const& params = globalSealEngine->chainParams();
    dev::u256 blockNumber = m_node.chainman->ActiveChain().Tip()->nHeight;
    RunPrecompiledTests(msm_G1_bls, msm_G1_bls, params, blockNumber);
}

BOOST_AUTO_TEST_CASE(checking_fail_msm_G1_bls){
    // Call msm_G1_bls 0xc
    dev::eth::ChainOperationParams const& params = globalSealEngine->chainParams();
    dev::u256 blockNumber = m_node.chainman->ActiveChain().Tip()->nHeight;
    RunPrecompiledTests(msm_G1_bls, fail_msm_G1_bls, params, blockNumber);
}

BOOST_AUTO_TEST_CASE(checking_add_G2_bls){
    // Call add_G2_bls 0xd
    dev::eth::ChainOperationParams const& params = globalSealEngine->chainParams();
    dev::u256 blockNumber = m_node.chainman->ActiveChain().Tip()->nHeight;
    RunPrecompiledTests(add_G2_bls, add_G2_bls, params, blockNumber);
}

BOOST_AUTO_TEST_CASE(checking_fail_add_G2_bls){
    // Call add_G2_bls 0xd
    dev::eth::ChainOperationParams const& params = globalSealEngine->chainParams();
    dev::u256 blockNumber = m_node.chainman->ActiveChain().Tip()->nHeight;
    RunPrecompiledTests(add_G2_bls, fail_add_G2_bls, params, blockNumber);
}

BOOST_AUTO_TEST_CASE(checking_mul_G2_bls){
    // Call msm_G2_bls 0xe
    dev::eth::ChainOperationParams const& params = globalSealEngine->chainParams();
    dev::u256 blockNumber = m_node.chainman->ActiveChain().Tip()->nHeight;
    RunPrecompiledTests(msm_G2_bls, mul_G2_bls, params, blockNumber);
}

BOOST_AUTO_TEST_CASE(checking_fail_mul_G2_bls){
    // Call msm_G2_bls 0xe
    dev::eth::ChainOperationParams const& params = globalSealEngine->chainParams();
    dev::u256 blockNumber = m_node.chainman->ActiveChain().Tip()->nHeight;
    RunPrecompiledTests(msm_G2_bls, fail_mul_G2_bls, params, blockNumber);
}

BOOST_AUTO_TEST_CASE(checking_msm_G2_bls){
    // Call msm_G2_bls 0xe
    dev::eth::ChainOperationParams const& params = globalSealEngine->chainParams();
    dev::u256 blockNumber = m_node.chainman->ActiveChain().Tip()->nHeight;
    RunPrecompiledTests(msm_G2_bls, msm_G2_bls, params, blockNumber);
}

BOOST_AUTO_TEST_CASE(checking_fail_msm_G2_bls){
    // Call msm_G2_bls 0xe
    dev::eth::ChainOperationParams const& params = globalSealEngine->chainParams();
    dev::u256 blockNumber = m_node.chainman->ActiveChain().Tip()->nHeight;
    RunPrecompiledTests(msm_G2_bls, fail_msm_G2_bls, params, blockNumber);
}

BOOST_AUTO_TEST_SUITE_END()

}
