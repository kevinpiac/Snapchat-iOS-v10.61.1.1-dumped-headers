//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensMetadataStoreProtocol-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class NSArray, NSString, SCLens, SCLensMetadataStoreListenerAnnouncer;

@interface SCFixedSingleLensMetadataStore : NSObject <SCTraceEnabled, SCLensMetadataStoreProtocol>
{
    SCLens *_lens;
    SCLensMetadataStoreListenerAnnouncer *_announcer;
}

- (void).cxx_destruct;
- (void)addListener:(id)arg1;
- (void)applyMetadataProviderSettings:(id)arg1;
- (id)initWithLens:(id)arg1;
@property(readonly, nonatomic) NSArray *lenses;
@property(readonly, nonatomic) NSArray *lensesToPrefetch;
- (void)removeListener:(id)arg1;
- (void)startUpdating;
- (void)stopUpdating;
- (void)synchronize;
- (void)warmUp;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

