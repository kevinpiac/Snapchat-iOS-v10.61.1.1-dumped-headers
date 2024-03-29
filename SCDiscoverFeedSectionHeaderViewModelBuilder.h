//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSString, SCActionModel, SCDiscoverFeedSectionHeaderSwipeTeachingViewModel, UIColor;

@interface SCDiscoverFeedSectionHeaderViewModelBuilder : NSObject
{
    NSString *_primaryTitle;
    UIColor *_primaryTitleColor;
    NSAttributedString *_attributeSecondaryButtonText;
    double _leftMargin;
    double _rightMargin;
    SCActionModel *_primaryButtonActionModel;
    SCActionModel *_secondaryButtonActionModel;
    SCActionModel *_debugActionModel;
    SCDiscoverFeedSectionHeaderSwipeTeachingViewModel *_swipeTeachingViewModel;
}

+ (id)discoverFeedSectionHeaderViewModel;
+ (id)discoverFeedSectionHeaderViewModelFromExistingDiscoverFeedSectionHeaderViewModel:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)withAttributeSecondaryButtonText:(id)arg1;
- (id)withDebugActionModel:(id)arg1;
- (id)withLeftMargin:(double)arg1;
- (id)withPrimaryButtonActionModel:(id)arg1;
- (id)withPrimaryTitle:(id)arg1;
- (id)withPrimaryTitleColor:(id)arg1;
- (id)withRightMargin:(double)arg1;
- (id)withSecondaryButtonActionModel:(id)arg1;
- (id)withSwipeTeachingViewModel:(id)arg1;

@end

