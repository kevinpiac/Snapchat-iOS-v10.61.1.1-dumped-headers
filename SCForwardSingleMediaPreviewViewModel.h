//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSendPreviewViewModel-Protocol.h"

@class NSString, SCBaseMediaThumbnailViewModel;

@interface SCForwardSingleMediaPreviewViewModel : NSObject <SCSendPreviewViewModel>
{
    SCBaseMediaThumbnailViewModel *_baseMediaThumbnailViewModel;
    long long _shareType;
}

- (void).cxx_destruct;
- (id)initWithBaseMediaThumbnailViewModel:(id)arg1 shareType:(long long)arg2;
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

