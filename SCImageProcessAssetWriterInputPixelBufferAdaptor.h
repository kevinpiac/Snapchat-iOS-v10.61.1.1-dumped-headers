//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAssetWriterInputPixelBufferAdaptor;

@interface SCImageProcessAssetWriterInputPixelBufferAdaptor : NSObject
{
    struct __CVPixelBufferPool *_pixelBufferPool;
    AVAssetWriterInputPixelBufferAdaptor *_assetWriterInputPixelBufferAdaptor;
    struct CGSize _outputSize;
}

- (void).cxx_destruct;
- (void)_checkSourcePixelBufferAttributes:(id)arg1;
- (_Bool)appendPixelBuffer:(struct __CVBuffer *)arg1 withPresentationTime:(CDStruct_1b6d18a9)arg2;
- (struct __CVBuffer *)createAssetWriterInputPixelBuffer;
- (struct __CVBuffer *)createPixelBuffer;
- (void)dealloc;
- (id)initLagunaWithAssetWriterInput:(id)arg1 sourcePixelBufferAttributes:(id)arg2 outputSize:(struct CGSize)arg3;
- (id)initWithAssetWriterInput:(id)arg1 sourcePixelBufferAttributes:(id)arg2 outputSize:(struct CGSize)arg3;
@property(readonly, nonatomic) struct CGSize outputSize; // @synthesize outputSize=_outputSize;

@end

