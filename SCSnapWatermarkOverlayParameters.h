//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SCSnapWatermarkOverlayParameters : NSObject
{
    _Bool _shouldDrawWatermarkImage;
    NSString *_displayName;
    NSString *_username;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (id)initWithDisplayName:(id)arg1 username:(id)arg2 shouldDrawWatermarkImage:(_Bool)arg3;
- (id)initWithDrawWatermarkImageOnly;
@property(readonly, nonatomic) _Bool shouldDrawUsername;
@property(readonly, nonatomic) _Bool shouldDrawWatermarkImage; // @synthesize shouldDrawWatermarkImage=_shouldDrawWatermarkImage;
@property(readonly, nonatomic) NSString *username; // @synthesize username=_username;

@end

