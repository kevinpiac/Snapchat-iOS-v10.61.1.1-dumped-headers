//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSString;

@interface SCAUserProfileUpdate : SCAUserTrackedEvent
{
    long long settingFieldName;
    NSString *settingFieldValue;
    NSString *settingFieldValuePrevious;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (double)getPerUserSamplingRate;
- (long long)getSettingFieldName;
- (id)getSettingFieldValue;
- (id)getSettingFieldValuePrevious;
- (id)init;
- (void)setSettingFieldName:(long long)arg1;
- (void)setSettingFieldValue:(id)arg1;
- (void)setSettingFieldValuePrevious:(id)arg1;

@end

