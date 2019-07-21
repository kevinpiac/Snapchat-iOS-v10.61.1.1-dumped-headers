//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, UIImage;

@interface SCHovaStatusBarSnapshot : NSObject
{
    long long _statusBarStyle;
    NSDate *_timestamp;
    UIImage *_image;
    UIImage *_tintedImage;
}

+ (id)statusBarSnapshotWithImage:(id)arg1 statusBarStyle:(long long)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
- (id)initWithImage:(id)arg1 statusBarStyle:(long long)arg2;
- (_Bool)isSnapshotStale;
@property(readonly, nonatomic) long long statusBarStyle; // @synthesize statusBarStyle=_statusBarStyle;
@property(readonly, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) UIImage *tintedImage; // @synthesize tintedImage=_tintedImage;

@end
