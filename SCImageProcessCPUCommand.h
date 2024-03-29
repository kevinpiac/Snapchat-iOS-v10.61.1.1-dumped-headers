//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCImageProcessCommand.h"

@interface SCImageProcessCPUCommand : SCImageProcessCommand
{
}

- (_Bool)drawWithPixelWidth:(unsigned long long)arg1 pixelHeight:(unsigned long long)arg2 outputWidth:(unsigned long long)arg3 outputHeight:(unsigned long long)arg4 renderRange:(CDStruct_6fe4de6c)arg5 orientation:(long long)arg6 viewportTransform:(struct CGAffineTransform)arg7 negativeSpaceColor:(id)arg8 error:(id *)arg9;
- (id)init;
- (_Bool)isGPUPass;
- (_Bool)isLoaded;
- (void)load;
- (id)runWithContext:(id)arg1 inputPixelBuffer:(struct __CVBuffer *)arg2 outputPixelBuffer:(struct __CVBuffer *)arg3 orientation:(long long)arg4 error:(id *)arg5;
- (id)runWithContext:(id)arg1 pixelSize:(CDStruct_5e758c1a)arg2 bytesPerRow:(unsigned long long)arg3 outputPixelSize:(CDStruct_5e758c1a)arg4 renderRange:(CDStruct_6fe4de6c)arg5 orientation:(long long)arg6 viewportTransform:(struct CGAffineTransform)arg7 negativeSpaceColor:(id)arg8 error:(id *)arg9;
- (_Bool)unloadWithError:(id *)arg1;

@end

