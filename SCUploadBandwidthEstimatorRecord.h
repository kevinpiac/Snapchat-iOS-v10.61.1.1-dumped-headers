//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCUploadBandwidthEstimatorRecord : NSObject
{
    double _firstByteSentTime;
    unsigned long long _uploadWorkloadWhenStart;
    unsigned long long _totalBytesSentInTheSession;
}

@property(nonatomic) double firstByteSentTime; // @synthesize firstByteSentTime=_firstByteSentTime;
- (id)initWithTotalBytesSent:(id)arg1 uploadWorkload:(unsigned long long)arg2;
@property(nonatomic) unsigned long long totalBytesSentInTheSession; // @synthesize totalBytesSentInTheSession=_totalBytesSentInTheSession;
@property(nonatomic) unsigned long long uploadWorkloadWhenStart; // @synthesize uploadWorkloadWhenStart=_uploadWorkloadWhenStart;

@end

