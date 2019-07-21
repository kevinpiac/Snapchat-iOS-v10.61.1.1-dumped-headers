//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCARegistrationUserTrackedEvent.h"

@class NSNumber, NSString;

@interface SCARegistrationUserGrantContactsPermission : SCARegistrationUserTrackedEvent
{
    NSNumber *granted;
    long long promptType;
    NSString *longClientId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (_Bool)getGranted;
- (id)getLongClientId;
- (double)getPerUserSamplingRate;
- (long long)getPromptType;
- (id)init;
- (void)setGranted:(_Bool)arg1;
- (void)setLongClientId:(id)arg1;
- (void)setPromptType:(long long)arg1;

@end

