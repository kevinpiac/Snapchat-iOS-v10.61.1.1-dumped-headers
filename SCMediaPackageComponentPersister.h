//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCMediaPackageComponentPersisting-Protocol.h"

@class NSString;
@protocol SCKeyValuePersisting;

@interface SCMediaPackageComponentPersister : NSObject <SCMediaPackageComponentPersisting>
{
    id <SCKeyValuePersisting> _keyValueStore;
}

- (void).cxx_destruct;
- (_Bool)addMediaPackageWithMediaData:(id)arg1 mediaInfo:(id)arg2 edit:(id)arg3 overlay:(id)arg4 internalInfo:(id)arg5;
- (id)allMediaPackageIds;
- (id)editForMediaPackageId:(id)arg1;
- (id)initWithKeyValueStore:(id)arg1;
- (id)internalInfoForMediaPackageId:(id)arg1;
- (id)mediaDataForMediaPackageId:(id)arg1;
- (id)mediaInfoForMediaPackageId:(id)arg1;
- (id)overlayForMediaPackageId:(id)arg1;
- (void)removeMediaPackageForId:(id)arg1;
- (_Bool)setInternalInfo:(id)arg1 forMediaPackageId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

