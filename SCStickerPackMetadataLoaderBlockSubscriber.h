//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCStickerPackMetadataLoaderSubscriber-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface SCStickerPackMetadataLoaderBlockSubscriber : NSObject <SCStickerPackMetadataLoaderSubscriber>
{
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _block;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void)didUpdateStickerPacks:(id)arg1 forSource:(id)arg2;
- (id)initWithCompletionQueue:(id)arg1 block:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

