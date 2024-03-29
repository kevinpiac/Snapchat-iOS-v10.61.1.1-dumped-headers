//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface LCVCoreSystem : NSObject
{
    struct unique_ptr<LabsCV::CoreSystem, std::__1::default_delete<LabsCV::CoreSystem>> pCoreSystem;
    struct function<void (const float &)> mProgressCallback;
    struct function<void (const LabsCV::DepthFrameData &)> mFrameOutputCallback;
    struct future<bool> tmpResult;
}

+ (_Bool)readAlignmentDataFromPath:(id)arg1 withOutput:(id)arg2;
+ (_Bool)readCameraDataFromPath:(id)arg1 withDepthCameraOutput:(id)arg2 withRgbCameraOutput:(id)arg3;
+ (_Bool)readDepthDataFromDisparityWithPath:(id)arg1 withFocalLength:(double)arg2 withBaseline:(double)arg3 withMultiplier:(double)arg4 withOutput:(id)arg5;
+ (_Bool)readDepthDataFromDisparityWithPath:(id)arg1 withFocalLength:(double)arg2 withBaseline:(double)arg3 withOutput:(id)arg4;
+ (_Bool)readDepthDataFromPath:(id)arg1 withOutput:(id)arg2;
+ (_Bool)readSixdofDataFromPath:(id)arg1 withOutput:(id)arg2;
+ (_Bool)readTimestampDataFromPath:(id)arg1 withOutput:(id)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)extractCalibration:(id)arg1 error:(id *)arg2;
- (void)extractDepth:(_Bool)arg1 withPrimaryCamera:(long long)arg2 withFrameOutputCallback:(CDUnknownBlockType)arg3 withProgressCallback:(CDUnknownBlockType)arg4 error:(id *)arg5;
- (void)extractDepth:(_Bool)arg1 withPrimaryCamera:(long long)arg2 withFrameOutputCallback:(CDUnknownBlockType)arg3 withProgressCallback:(CDUnknownBlockType)arg4 prepareForStorage:(_Bool)arg5 error:(id *)arg6;
- (id)initWithExtractionParams:(_Bool)arg1 withCalibrationFilePath:(id)arg2;
- (id)initWithExtractionParams:(_Bool)arg1 withCalibrationFilePath:(id)arg2 isSingleFrame:(_Bool)arg3 withClassifierDataPath:(id)arg4 withAdjustmentFilePath:(id)arg5;
- (id)initWithExtractionParams:(_Bool)arg1 withCalibrationFilePath:(id)arg2 isSingleFrame:(_Bool)arg3 withClassifierDataPath:(id)arg4 withAdjustmentFilePath:(id)arg5 withContentFilePath:(id)arg6 withFrameCount:(long long)arg7 withTimestampMap:(id)arg8;

@end

