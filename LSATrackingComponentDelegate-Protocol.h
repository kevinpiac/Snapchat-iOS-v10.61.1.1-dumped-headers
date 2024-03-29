//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ARFrame, LSAPortraitEffectsMatteWrapper, LSATrackingComponent;

@protocol LSATrackingComponentDelegate <NSObject>
- (_Bool)trackingComponent:(LSATrackingComponent *)arg1 restartTrackingAtPoint:(struct CGPoint)arg2;
-     // Error parsing type: B104@0:8@"LSATrackingComponent"16{?={?=[4]}d}24, name: trackingComponent:restartTrackingWithExistingTrackingData:
- (_Bool)trackingComponentBeginTracking:(LSATrackingComponent *)arg1;
- (_Bool)trackingComponentEndTracking:(LSATrackingComponent *)arg1;
- (void)trackingComponentFinishedTrackingProcessing:(LSATrackingComponent *)arg1;
- (ARFrame *)trackingComponentFrameForTrackingDataGeneration:(LSATrackingComponent *)arg1;
- (_Bool)trackingComponentIsNativeTrackingSupported:(LSATrackingComponent *)arg1;
- (_Bool)trackingComponentResetTracking:(LSATrackingComponent *)arg1;

@optional
- (LSAPortraitEffectsMatteWrapper *)trackingComponentPortraitEffectsMatteForTrackingDataGeneration:(LSATrackingComponent *)arg1;
@end

