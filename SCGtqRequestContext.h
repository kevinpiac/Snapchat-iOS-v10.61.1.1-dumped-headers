//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CLLocation, NSDate, NSString;

@interface SCGtqRequestContext : NSObject
{
    NSDate *_requestStartTime;
    NSString *_referenceId;
    CLLocation *_location;
}

- (void).cxx_destruct;
- (id)initWithReferenceId:(id)arg1 requestStartTime:(id)arg2 location:(id)arg3;
@property(readonly, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(readonly, nonatomic) NSString *referenceId; // @synthesize referenceId=_referenceId;
@property(readonly, nonatomic) NSDate *requestStartTime; // @synthesize requestStartTime=_requestStartTime;

@end

