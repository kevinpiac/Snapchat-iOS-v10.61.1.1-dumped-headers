//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCManagedVideoDataSourceListener-Protocol.h"

@class NSString;

@interface SCSingleFrameStreamCapturer : NSObject <SCManagedVideoDataSourceListener>
{
    CDUnknownBlockType _callback;
}

- (void).cxx_destruct;
- (id)imageFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (id)initWithCompletion:(CDUnknownBlockType)arg1;
- (void)managedVideoDataSource:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 devicePosition:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

