//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImage.h>

@interface UIImage (OpenCV)
+ (struct CGColorSpace *)_getSupportedColorSpaceForImage:(id)arg1 needRelease:(_Bool *)arg2;
+ (_Bool)_isColorSpaceModelUnsupported:(int)arg1;
+ (id)fromCVMat:(const struct Mat *)arg1 orientation:(long long)arg2;
+ (struct Mat)toCVMat:(id)arg1 transform:(struct CGAffineTransform)arg2;
- (struct Mat)toCVMat;
- (struct Mat)toCVMatWithAlpha;
@end

