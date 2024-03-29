//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "SCChatAddressMediaCardViewModel-Protocol.h"
#import "SCChatMediaCardViewModel-Protocol.h"
#import "SCChatPhoneMediaCardViewModel-Protocol.h"
#import "SCChatURLMediaCardViewModel-Protocol.h"

@class NSAttributedString, NSString, NSURL, SCChatMediaCardContentViewModel, UIImage;

@interface SCChatMediaCardViewModel : NSObject <SCChatMediaCardViewModel, SCChatPhoneMediaCardViewModel, SCChatAddressMediaCardViewModel, SCChatURLMediaCardViewModel, NSCopying>
{
    _Bool _shouldShowDefaultThumbnail;
    _Bool _shouldActOnGesture;
    _Bool _isGrayScale;
    SCChatMediaCardContentViewModel *_mediaCardContent;
    NSAttributedString *_attributedTitle;
    NSAttributedString *_attributedSubtitle;
    NSString *_defaultThumbnailImageId;
    double _height;
}

- (void).cxx_destruct;
- (id)accessoryIcon;
- (id)actionText;
@property(readonly, copy, nonatomic) NSString *address;
@property(readonly, copy, nonatomic) NSAttributedString *attributedSubtitle; // @synthesize attributedSubtitle=_attributedSubtitle;
@property(readonly, copy, nonatomic) NSAttributedString *attributedTitle; // @synthesize attributedTitle=_attributedTitle;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)defaultThumbnailImage;
@property(readonly, copy, nonatomic) NSString *defaultThumbnailImageId; // @synthesize defaultThumbnailImageId=_defaultThumbnailImageId;
@property(readonly, nonatomic) _Bool disableV2ContextMenu;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) double height; // @synthesize height=_height;
- (id)initWithMediaCardContent:(id)arg1 attributedTitle:(id)arg2 attributedSubtitle:(id)arg3 defaultThumbnailImageId:(id)arg4 shouldShowDefaultThumbnail:(_Bool)arg5 shouldActOnGesture:(_Bool)arg6 isGrayScale:(_Bool)arg7 height:(double)arg8;
- (_Bool)isCircularThumbnail;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool isGrayScale; // @synthesize isGrayScale=_isGrayScale;
@property(readonly, copy, nonatomic) SCChatMediaCardContentViewModel *mediaCardContent; // @synthesize mediaCardContent=_mediaCardContent;
@property(readonly, nonatomic) NSString *phoneNumber;
@property(readonly, nonatomic) _Bool shouldActOnGesture; // @synthesize shouldActOnGesture=_shouldActOnGesture;
@property(readonly, nonatomic) _Bool shouldShowDefaultThumbnail; // @synthesize shouldShowDefaultThumbnail=_shouldShowDefaultThumbnail;
@property(readonly, nonatomic) _Bool shouldUseV3Cache;
@property(readonly, copy, nonatomic) NSString *thumbnailCacheId;
@property(readonly, nonatomic) UIImage *thumbnailImage;
@property(readonly, copy, nonatomic) NSString *trackingId;
- (long long)type;
@property(readonly, nonatomic) NSURL *url;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

