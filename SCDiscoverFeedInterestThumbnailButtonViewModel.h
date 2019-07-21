//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSAttributedString, SCActionModel, SCCornerRadii, SCDiscoverFeedStoryLoggingInfo, SCNetworkImage, UIImage;

@interface SCDiscoverFeedInterestThumbnailButtonViewModel : NSObject <NSCopying>
{
    _Bool _isCheckMarkVisible;
    SCCornerRadii *_cornerRadii;
    NSAttributedString *_attributedDisplayText;
    SCNetworkImage *_thumbnailBackgroundImage;
    UIImage *_overlayImage;
    SCActionModel *_tapActionModel;
    SCDiscoverFeedStoryLoggingInfo *_dfLoggingInfo;
    struct CGSize _preferredSize;
    struct CGSize _overlayImageSize;
    struct UIEdgeInsets _textEdgeInset;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSAttributedString *attributedDisplayText; // @synthesize attributedDisplayText=_attributedDisplayText;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) SCCornerRadii *cornerRadii; // @synthesize cornerRadii=_cornerRadii;
@property(readonly, copy, nonatomic) SCDiscoverFeedStoryLoggingInfo *dfLoggingInfo; // @synthesize dfLoggingInfo=_dfLoggingInfo;
- (unsigned long long)hash;
- (id)initWithPreferredSize:(struct CGSize)arg1 cornerRadii:(id)arg2 attributedDisplayText:(id)arg3 textEdgeInset:(struct UIEdgeInsets)arg4 thumbnailBackgroundImage:(id)arg5 overlayImage:(id)arg6 overlayImageSize:(struct CGSize)arg7 isCheckMarkVisible:(_Bool)arg8 tapActionModel:(id)arg9 dfLoggingInfo:(id)arg10;
@property(readonly, nonatomic) _Bool isCheckMarkVisible; // @synthesize isCheckMarkVisible=_isCheckMarkVisible;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) UIImage *overlayImage; // @synthesize overlayImage=_overlayImage;
@property(readonly, nonatomic) struct CGSize overlayImageSize; // @synthesize overlayImageSize=_overlayImageSize;
@property(readonly, nonatomic) struct CGSize preferredSize; // @synthesize preferredSize=_preferredSize;
@property(readonly, copy, nonatomic) SCActionModel *tapActionModel; // @synthesize tapActionModel=_tapActionModel;
@property(readonly, nonatomic) struct UIEdgeInsets textEdgeInset; // @synthesize textEdgeInset=_textEdgeInset;
@property(readonly, copy, nonatomic) SCNetworkImage *thumbnailBackgroundImage; // @synthesize thumbnailBackgroundImage=_thumbnailBackgroundImage;

@end

