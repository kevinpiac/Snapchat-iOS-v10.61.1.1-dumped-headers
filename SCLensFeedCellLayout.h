//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, SCLensFeedLensInfoLayout, SCLensFeedSectionLayout, UIColor;

@interface SCLensFeedCellLayout : NSObject
{
    SCLensFeedLensInfoLayout *_lensInfoLayout;
    SCLensFeedSectionLayout *_sectionLayout;
    struct CGSize _lensChallengesSnapCellSize;
    struct CGSize _halfHeightLensCellPreviewSize;
    struct CGSize _lensCellPreviewSize;
    struct CGSize _lensCellSize;
    struct CGSize _halfHeightLensCellSize;
    struct CGSize _subscriptionLensCellSize;
    struct CGSize _subscriptionLensCellPreviewSize;
}

- (void).cxx_destruct;
- (id)_attributesWithLineHeight:(double)arg1 shadowRadius:(double)arg2 shadowOffset:(struct CGSize)arg3 font:(id)arg4 lineBreakMode:(long long)arg5 foregroundColor:(id)arg6;
- (struct CGSize)_fourColumnsCellSize;
- (double)_screenWidth;
- (struct CGSize)_subscriptionLensCellPreviewSize;
- (struct CGSize)_threeColumnsCellSize;
@property(readonly, nonatomic) double avatarNameSpacing;
@property(readonly, nonatomic) double cellCornerRadius;
@property(readonly, nonatomic) struct CGSize creatorCellSize;
@property(readonly, nonatomic) NSDictionary *creatorSubscribeButtonTextAttributes;
@property(readonly, nonatomic) NSDictionary *creatorSubtitleAttributes;
@property(readonly, nonatomic) NSDictionary *creatorUserNameAttributes;
@property(nonatomic) struct CGSize halfHeightLensCellPreviewSize; // @synthesize halfHeightLensCellPreviewSize=_halfHeightLensCellPreviewSize;
@property(nonatomic) struct CGSize halfHeightLensCellSize; // @synthesize halfHeightLensCellSize=_halfHeightLensCellSize;
- (id)init;
@property(nonatomic) struct CGSize lensCellPreviewSize; // @synthesize lensCellPreviewSize=_lensCellPreviewSize;
@property(nonatomic) struct CGSize lensCellSize; // @synthesize lensCellSize=_lensCellSize;
- (CDUnknownBlockType)lensChallengeBaseTextConfiguration;
@property(readonly, copy, nonatomic) CDUnknownBlockType lensChallengeJoinNowConfiguration;
@property(readonly, copy, nonatomic) CDUnknownBlockType lensChallengeNewChallengeConfiguration;
@property(readonly, copy, nonatomic) CDUnknownBlockType lensChallengeSubtitleConfiguration;
@property(readonly, copy, nonatomic) CDUnknownBlockType lensChallengeTitleConfiguration;
@property(readonly, nonatomic) struct CGSize lensChallengesArrowIconSize;
@property(readonly, nonatomic) struct CGSize lensChallengesCellSize;
@property(readonly, nonatomic) struct CGSize lensChallengesJoinButtonSize;
@property(readonly, nonatomic) double lensChallengesMargin;
@property(readonly, nonatomic) struct CGSize lensChallengesSnapCellSize; // @synthesize lensChallengesSnapCellSize=_lensChallengesSnapCellSize;
@property(readonly, nonatomic) double lensChallengesTitleSubtitleSpacing;
@property(readonly, nonatomic) SCLensFeedLensInfoLayout *lensInfoLayout; // @synthesize lensInfoLayout=_lensInfoLayout;
@property(readonly, nonatomic) NSDictionary *mainPageCreatorUserNameAttributes;
@property(readonly, nonatomic) NSDictionary *mainPageCreatorUserNameAttributesWithAB;
@property(readonly, nonatomic) double nameSubtitleSpacing;
@property(readonly, nonatomic) struct CGSize noPreviewLensIconSize;
@property(readonly, nonatomic) double previewBorderWidth;
@property(readonly, nonatomic) double previewInsetOffset;
- (id)scanCardCreatorNameAttributesWithRedirection:(_Bool)arg1;
@property(nonatomic) struct CGSize subscriptionLensCellPreviewSize; // @synthesize subscriptionLensCellPreviewSize=_subscriptionLensCellPreviewSize;
@property(nonatomic) struct CGSize subscriptionLensCellSize; // @synthesize subscriptionLensCellSize=_subscriptionLensCellSize;
@property(readonly, nonatomic) UIColor *storyCellBorderColor;
@property(readonly, nonatomic) double storyCellBorderWidth;
@property(readonly, nonatomic) double storyCellCornerRadius;
@property(readonly, nonatomic) struct CGSize storyCellSize;
@property(readonly, nonatomic) struct CGSize storyCellSmallSize;
@property(readonly, nonatomic) struct UIEdgeInsets storyCellSubtitleInsets;
@property(readonly, nonatomic) struct UIEdgeInsets storyCellTitleInsets;
@property(readonly, copy, nonatomic) CDUnknownBlockType storySubtitleConfiguration;
@property(readonly, copy, nonatomic) CDUnknownBlockType storyTitleConfiguration;
@property(readonly, nonatomic) double subscribeButtonHeight;
@property(readonly, nonatomic) double subscribeDividerSpacing;
@property(readonly, nonatomic) double subtitleSubscribeSpacing;
@property(readonly, copy, nonatomic) NSArray *titleBackgroundGradientColors;
@property(readonly, nonatomic) double withPreviewLensIconOffset;
@property(readonly, nonatomic) struct CGSize withPreviewLensIconSize;
@property(readonly, nonatomic) double withPreviewSmallLensIconOffset;
@property(readonly, nonatomic) struct CGSize withPreviewSmallLensIconSize;

@end

