//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSURL;

@interface AMPUploadDetails : NSObject
{
    _Bool _uploadStartedWhenAppInBackground;
    _Bool _bgPrefetch;
    NSNumber *_statusCode;
    unsigned long long _responseSizeInBytes;
    unsigned long long _requestSizeInBytes;
    double _requestLatency;
    unsigned long long _numEventsOnDisk;
    unsigned long long _numEventsInRequest;
    NSURL *_uploadUrl;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool bgPrefetch; // @synthesize bgPrefetch=_bgPrefetch;
- (id)description;
- (unsigned long long)hash;
- (id)initWithStatusCode:(id)arg1 responseSizeInBytes:(unsigned long long)arg2 requestSizeInBytes:(unsigned long long)arg3 latencySeconds:(double)arg4 numEventsOnDisk:(unsigned long long)arg5 numEventsInRequest:(unsigned long long)arg6 uploadUrl:(id)arg7 uploadStartedWhenAppInBackground:(_Bool)arg8 bgPrefetch:(_Bool)arg9;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToDetails:(id)arg1;
@property(readonly, nonatomic) unsigned long long numEventsInRequest; // @synthesize numEventsInRequest=_numEventsInRequest;
@property(readonly, nonatomic) unsigned long long numEventsOnDisk; // @synthesize numEventsOnDisk=_numEventsOnDisk;
@property(readonly, nonatomic) double requestLatency; // @synthesize requestLatency=_requestLatency;
@property(readonly, nonatomic) unsigned long long requestSizeInBytes; // @synthesize requestSizeInBytes=_requestSizeInBytes;
@property(readonly, nonatomic) unsigned long long responseSizeInBytes; // @synthesize responseSizeInBytes=_responseSizeInBytes;
@property(readonly, nonatomic) NSNumber *statusCode; // @synthesize statusCode=_statusCode;
@property(readonly, nonatomic) _Bool uploadStartedWhenAppInBackground; // @synthesize uploadStartedWhenAppInBackground=_uploadStartedWhenAppInBackground;
@property(readonly, nonatomic) NSURL *uploadUrl; // @synthesize uploadUrl=_uploadUrl;

@end

