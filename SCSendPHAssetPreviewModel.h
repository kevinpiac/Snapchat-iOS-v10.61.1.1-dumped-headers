//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSendPreviewViewModel-Protocol.h"

@class NSString, PHAsset, SCExperimentManager;

@interface SCSendPHAssetPreviewModel : NSObject <SCSendPreviewViewModel>
{
    PHAsset *_asset;
    long long _shareType;
    SCExperimentManager *_experimentManager;
}

- (void).cxx_destruct;
- (id)initWithPHAsset:(id)arg1 shareType:(long long)arg2 experimentManager:(id)arg3;
- (id)mediaView;
- (double)mediaViewAspectRatio;
- (long long)shareType;
- (long long)viewStyle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

