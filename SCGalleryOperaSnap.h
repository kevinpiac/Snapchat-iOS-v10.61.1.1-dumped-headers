//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class PHAsset, SCGalleryOperaSnapEntryInfo, SCGallerySnap;

@interface SCGalleryOperaSnap : NSObject <NSCopying>
{
    unsigned long long _subtype;
    SCGallerySnap *_snap_snap;
    SCGalleryOperaSnapEntryInfo *_snap_entryInfo;
    PHAsset *_cameraRoll_cameraRoll;
}

+ (id)cameraRollWithCameraRoll:(id)arg1;
+ (id)snapWithSnap:(id)arg1 entryInfo:(id)arg2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)internalInit;
- (_Bool)isEqual:(id)arg1;
- (void)matchSnap:(CDUnknownBlockType)arg1 cameraRoll:(CDUnknownBlockType)arg2;

@end

