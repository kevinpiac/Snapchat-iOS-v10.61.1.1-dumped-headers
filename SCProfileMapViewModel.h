//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class SCFriendLocationSnapshotMapViewModel, SCProfileEmbeddedMapViewModel;

@interface SCProfileMapViewModel : NSObject <NSCopying>
{
    unsigned long long _subtype;
    SCFriendLocationSnapshotMapViewModel *_mapSnapshot_viewModel;
    SCProfileEmbeddedMapViewModel *_embeddedMap_viewModel;
}

+ (id)embeddedMapWithViewModel:(id)arg1;
+ (id)mapSnapshotWithViewModel:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)internalInit;
- (_Bool)isEqual:(id)arg1;
- (void)matchMapSnapshot:(CDUnknownBlockType)arg1 embeddedMap:(CDUnknownBlockType)arg2;

@end

