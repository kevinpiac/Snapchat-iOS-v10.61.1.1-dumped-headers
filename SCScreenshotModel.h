//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, UIImage;

@interface SCScreenshotModel : NSObject
{
    UIImage *_thumbnailImage;
    UIImage *_screenshotImage;
    NSDate *_screenshotCreationTime;
}

- (void).cxx_destruct;
- (id)initWithThumbnailImage:(id)arg1 screenshotImage:(id)arg2 screenshotCreationTime:(id)arg3;
@property(readonly, nonatomic) NSDate *screenshotCreationTime; // @synthesize screenshotCreationTime=_screenshotCreationTime;
@property(readonly, nonatomic) UIImage *screenshotImage; // @synthesize screenshotImage=_screenshotImage;
@property(readonly, nonatomic) UIImage *thumbnailImage; // @synthesize thumbnailImage=_thumbnailImage;

@end

