//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@class NSString;

@interface SCGeofilterToastView : UILabel
{
    double _toastFadeInTimeSecs;
    double _toastFadeOutTimeSecs;
    double _toastOnScreenTimeSecs;
    NSString *_position;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1 dict:(id)arg2;
@property(readonly, copy, nonatomic) NSString *position; // @synthesize position=_position;
@property(readonly, nonatomic) double toastFadeInTimeSecs; // @synthesize toastFadeInTimeSecs=_toastFadeInTimeSecs;
@property(readonly, nonatomic) double toastFadeOutTimeSecs; // @synthesize toastFadeOutTimeSecs=_toastFadeOutTimeSecs;
@property(readonly, nonatomic) double toastOnScreenTimeSecs; // @synthesize toastOnScreenTimeSecs=_toastOnScreenTimeSecs;

@end

