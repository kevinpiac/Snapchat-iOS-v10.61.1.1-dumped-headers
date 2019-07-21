//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SCLens, UILabel, UIStackView;

@interface SCLensCellDebugView : UIView
{
    SCLens *_lastUsedLens;
    UIStackView *_qaLabelsStackView;
    UILabel *_iconTypeLabel;
    UILabel *_resourceTypeLabel;
}

- (void).cxx_destruct;
- (id)_typeDescriptionForResourceType:(long long)arg1;
@property(retain, nonatomic) UILabel *iconTypeLabel; // @synthesize iconTypeLabel=_iconTypeLabel;
@property(nonatomic) __weak SCLens *lastUsedLens; // @synthesize lastUsedLens=_lastUsedLens;
- (void)prepareForReuse;
@property(retain, nonatomic) UIStackView *qaLabelsStackView; // @synthesize qaLabelsStackView=_qaLabelsStackView;
@property(retain, nonatomic) UILabel *resourceTypeLabel; // @synthesize resourceTypeLabel=_resourceTypeLabel;
- (void)showLensIconTypeForURLString:(id)arg1;
- (void)showLensResourceTypeForResource:(id)arg1;
- (void)showLensResources:(id)arg1;

@end

