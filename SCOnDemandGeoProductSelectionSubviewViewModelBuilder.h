//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface SCOnDemandGeoProductSelectionSubviewViewModelBuilder : NSObject
{
    NSString *_title;
    NSString *_productDescription;
    NSString *_buttonTitle;
    NSURL *_videoUrl;
    NSURL *_imageUrl;
}

+ (id)withOnDemandGeoProductSelectionSubviewViewModel:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setButtonTitle:(id)arg1;
- (id)setImageUrl:(id)arg1;
- (id)setProductDescription:(id)arg1;
- (id)setTitle:(id)arg1;
- (id)setVideoUrl:(id)arg1;

@end

