/**
 * Copyright (c) 2015-present, Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */

#import <UIKit/UIKit.h>

#import <ReactABI20_0_0/ABI20_0_0RCTInvalidating.h>
#import <ReactABI20_0_0/ABI20_0_0RCTRootView.h>
#import <ReactABI20_0_0/ABI20_0_0RCTView.h>

@class ABI20_0_0RCTBridge;
@class ABI20_0_0RCTTouchHandler;

@interface ABI20_0_0RCTRootContentView : ABI20_0_0RCTView <ABI20_0_0RCTInvalidating>

@property (nonatomic, readonly, weak) ABI20_0_0RCTBridge *bridge;
@property (nonatomic, readonly, assign) BOOL contentHasAppeared;
@property (nonatomic, readonly, strong) ABI20_0_0RCTTouchHandler *touchHandler;
@property (nonatomic, readonly, assign) CGSize availableSize;

@property (nonatomic, assign) BOOL passThroughTouches;
@property (nonatomic, assign) ABI20_0_0RCTRootViewSizeFlexibility sizeFlexibility;

- (instancetype)initWithFrame:(CGRect)frame
                       bridge:(ABI20_0_0RCTBridge *)bridge
                     ReactABI20_0_0Tag:(NSNumber *)ReactABI20_0_0Tag
               sizeFlexiblity:(ABI20_0_0RCTRootViewSizeFlexibility)sizeFlexibility NS_DESIGNATED_INITIALIZER;

@end