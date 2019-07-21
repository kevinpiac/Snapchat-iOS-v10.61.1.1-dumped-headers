//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDictionary, SCImageProcessCommand;

@interface SCFilterView : UIView
{
    _Bool _displayed;
    NSDictionary *_config;
    SCImageProcessCommand *_imageProcessCommand;
}

+ (id)geofilterIdFromName:(id)arg1;
+ (id)idSpecificFilterNameWithFilterName:(id)arg1 filterId:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *config; // @synthesize config=_config;
@property(readonly, nonatomic) _Bool hasBackgroundFilter;
@property(retain, nonatomic) SCImageProcessCommand *imageProcessCommand; // @synthesize imageProcessCommand=_imageProcessCommand;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 config:(id)arg2;
@property(nonatomic, getter=isDisplayed) _Bool displayed; // @synthesize displayed=_displayed;
- (id)renderState;
- (void)setOrientation:(long long)arg1;
- (_Bool)shouldAddToAlternativeSuperview;
- (void)startViewing;
- (void)stopViewing;
- (void)updateConfig:(id)arg1;

@end
