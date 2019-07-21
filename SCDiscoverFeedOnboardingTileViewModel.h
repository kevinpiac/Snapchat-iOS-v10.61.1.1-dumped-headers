//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSAttributedString, SCActionModel, SCAvatarViewModel, SCDiscoverFeedOnboardingLoggingData, SCNetworkImage, UIColor, UIImage;

@interface SCDiscoverFeedOnboardingTileViewModel : NSObject <NSCopying>
{
    _Bool _isSelected;
    _Bool _centerTitle;
    NSAttributedString *_title;
    SCAvatarViewModel *_officialEmojiAvatar;
    SCNetworkImage *_thumbnailImage;
    UIImage *_selectionImage;
    SCActionModel *_selectionActionModel;
    UIColor *_backgroundColor;
    SCDiscoverFeedOnboardingLoggingData *_loggingData;
    struct CGSize _preferredSize;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, nonatomic) _Bool centerTitle; // @synthesize centerTitle=_centerTitle;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithTitle:(id)arg1 officialEmojiAvatar:(id)arg2 thumbnailImage:(id)arg3 isSelected:(_Bool)arg4 selectionImage:(id)arg5 selectionActionModel:(id)arg6 preferredSize:(struct CGSize)arg7 centerTitle:(_Bool)arg8 backgroundColor:(id)arg9 loggingData:(id)arg10;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(readonly, copy, nonatomic) SCDiscoverFeedOnboardingLoggingData *loggingData; // @synthesize loggingData=_loggingData;
@property(readonly, copy, nonatomic) SCAvatarViewModel *officialEmojiAvatar; // @synthesize officialEmojiAvatar=_officialEmojiAvatar;
@property(readonly, nonatomic) struct CGSize preferredSize; // @synthesize preferredSize=_preferredSize;
@property(readonly, copy, nonatomic) SCActionModel *selectionActionModel; // @synthesize selectionActionModel=_selectionActionModel;
@property(readonly, copy, nonatomic) UIImage *selectionImage; // @synthesize selectionImage=_selectionImage;
@property(readonly, copy, nonatomic) SCNetworkImage *thumbnailImage; // @synthesize thumbnailImage=_thumbnailImage;
@property(readonly, copy, nonatomic) NSAttributedString *title; // @synthesize title=_title;

@end

