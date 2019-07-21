//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LSABaseComponent.h"

#import "LSAGeoDataListener-Protocol.h"

@class LSAGeoDataComponentListenerAnnouncer, NSString;

@interface LSAGeoDataComponent : LSABaseComponent <LSAGeoDataListener>
{
    LSAGeoDataComponentListenerAnnouncer *_geoDataComponentAnnouncer;
    struct shared_ptr<LSAGeoDataDelegateWrapper> _delegateWrapper;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addListener:(id)arg1;
- (void)didRequestGeoData;
- (id)initWithPerformer:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)setCoreManager:(shared_ptr_6e078de4)arg1 announcer:(id)arg2 configuration:(id)arg3;
- (void)setGeoData:(id)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
