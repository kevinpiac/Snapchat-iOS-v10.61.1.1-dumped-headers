//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol LSAPlatformTrackingDelegate <NSObject>
- (void)didFinishTrackingProcessing;
- (_Bool)didRequestTrackingBeginWithRequirement:(unsigned int)arg1;
- (_Bool)didRequestTrackingDataGeneration:(LSAObjCppPtrWrapper_5f63bb26)arg1 image:(LSAObjCppPtrWrapper_f94b3356)arg2 parameters:(LSAObjCppPtrWrapper_f7213403)arg3 useAnchors:(_Bool)arg4 requirements:(unsigned int)arg5;
- (_Bool)didRequestTrackingEndWithRequirement:(unsigned int)arg1;
- (_Bool)didRequestTrackingReset;
- (_Bool)didRequestTrackingRestartAtPoint:(struct CGPoint)arg1;
-     // Error parsing type: B80@0:8{?=[4]}16, name: didRequestTrackingRestartWithExistingTransform:
- (_Bool)isDeviceSupported;
- (_Bool)isTrackingRequirementSupported:(unsigned int)arg1;
@end
