//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface SCMediaPackageMediaInfoBuilder : NSObject
{
    NSDate *_captureTime;
    long long _sojuMediaType;
    NSString *_captureSessionId;
    _Bool _isFromFrontFacingCamera;
    long long _captureOrientation;
}

+ (id)mediaPackageMediaInfo;
+ (id)mediaPackageMediaInfoFromExistingMediaPackageMediaInfo:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)withCaptureOrientation:(long long)arg1;
- (id)withCaptureSessionId:(id)arg1;
- (id)withCaptureTime:(id)arg1;
- (id)withIsFromFrontFacingCamera:(_Bool)arg1;
- (id)withSojuMediaType:(long long)arg1;

@end
