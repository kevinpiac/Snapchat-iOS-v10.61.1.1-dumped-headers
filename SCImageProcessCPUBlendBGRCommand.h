//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCImageProcessCPUCommand.h"

@interface SCImageProcessCPUBlendBGRCommand : SCImageProcessCPUCommand
{
    struct CGImage *_image;
    struct CGSize _outputSize;
    char *_blendData;
    unsigned long long _blendBytesPerRow;
}

+ (id)commandWithImage:(struct CGImage *)arg1 outputSize:(struct CGSize)arg2;
- (void)_generatePixelDataFromImageWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;
- (void)dealloc;
- (id)initWithImage:(struct CGImage *)arg1 outputSize:(struct CGSize)arg2;
- (id)runWithContext:(id)arg1 inputPixelBuffer:(struct __CVBuffer *)arg2 outputPixelBuffer:(struct __CVBuffer *)arg3 orientation:(long long)arg4 error:(id *)arg5;

@end

