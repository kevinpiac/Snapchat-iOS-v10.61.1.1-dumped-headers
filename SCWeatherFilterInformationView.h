//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface SCWeatherFilterInformationView : UIView
{
    UILabel *_locationNameLabel;
    UILabel *_bottomTemperatureScaleLabel;
    UIImageView *_informationViewDividerImage;
    double _informationDividerHeight;
    _Bool _isPreviewSticker;
}

- (void).cxx_destruct;
- (id)_stringForTemperatureScale:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1 locationName:(id)arg2 temperatureScale:(unsigned long long)arg3 isPreviewSticker:(_Bool)arg4;
- (_Bool)shouldResponseToTap:(id)arg1;
- (void)updateTemperatureScale:(unsigned long long)arg1;

@end

