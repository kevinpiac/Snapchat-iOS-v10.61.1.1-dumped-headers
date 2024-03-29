//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCloudFSDiskUsedListener-Protocol.h"
#import "SCServiceNotifier-Protocol.h"

@class NSString;

@interface SCCloudFSDiskUsedNotifier : NSObject <SCCloudFSDiskUsedListener, SCServiceNotifier>
{
    long long _diskUsedAbove;
    long long _diskUsedBelow;
    double _waitTime;
}

+ (id)notifierWhenDiskUsedAbove:(long long)arg1 diskUsedBelow:(long long)arg2 cloudFS:(id)arg3;
- (void)cloudFS:(id)arg1 didChangeDiskUsedSize:(long long)arg2;
- (double)waitUntil:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

