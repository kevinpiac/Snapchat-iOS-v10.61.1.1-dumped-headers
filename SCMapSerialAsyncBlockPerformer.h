//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, SCMapSerialAsyncBlockPerformerBlockWrapper;

@interface SCMapSerialAsyncBlockPerformer : NSObject
{
    SCMapSerialAsyncBlockPerformerBlockWrapper *_performingBlock;
    NSMutableArray *_pendingBlocks;
}

- (void).cxx_destruct;
- (void)_cancelPending;
- (void)_cancelPerforming;
- (void)_performNextBlockIfPossible;
- (void)cancelAll;
- (id)init;
- (void)submitBlock:(CDUnknownBlockType)arg1;
- (void)submitBlock:(CDUnknownBlockType)arg1 canceled:(CDUnknownBlockType)arg2;

@end

