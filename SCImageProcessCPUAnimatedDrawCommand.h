//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCImageProcessCPUCommand.h"

@class NSArray, SCCroppingState;

@interface SCImageProcessCPUAnimatedDrawCommand : SCImageProcessCPUCommand
{
    NSArray *_images;
    NSArray *_coordinateProviders;
    SCCroppingState *_croppingState;
}

- (void).cxx_destruct;
- (id)initWithImages:(id)arg1 vertexCoordinatesProviders:(id)arg2 cropppingState:(id)arg3;
- (id)runWithContext:(id)arg1 inputPixelBuffer:(struct __CVBuffer *)arg2 outputPixelBuffer:(struct __CVBuffer *)arg3 orientation:(long long)arg4 error:(id *)arg5;

@end

