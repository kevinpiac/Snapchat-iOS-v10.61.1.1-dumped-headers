//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCXBitmojiLayerModelProviderListener-Protocol.h"

@class NSString;

@interface SCXBitmojiLayerModelProviderListenerAnnouncer : NSObject <SCXBitmojiLayerModelProviderListener>
{
    struct mutex _mutex;
    struct shared_ptr<std::__1::vector<__weak id<SCXBitmojiLayerModelProviderListener>, std::__1::allocator<__weak id<SCXBitmojiLayerModelProviderListener>>>> _listeners;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)addListener:(id)arg1;
- (void)bitmojiLayerModelProvider:(id)arg1 didUpdateModelsWithDuration:(double)arg2;
- (void)bitmojiLayerModelProvider:(id)arg1 didUpdateSticker:(id)arg2 userId:(id)arg3 animated:(_Bool)arg4;
@property(readonly, copy) NSString *description;
- (void)removeListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

