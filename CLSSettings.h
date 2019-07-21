//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber, NSString;

@interface CLSSettings : NSObject
{
    NSDictionary *_settingsDictionary;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *betaEndpoint;
@property(readonly, copy, nonatomic) NSNumber *betaSuspendDuration;
@property(readonly, nonatomic) _Bool canProcessUrgentReports;
- (id)configuration;
@property(readonly, nonatomic) _Bool crashReportingEnabled;
@property(readonly, nonatomic) _Bool customExceptionsEnabled;
- (id)defaultConfiguration;
@property(readonly, nonatomic) unsigned int errorLogBufferSize;
@property(readonly, nonatomic) _Bool errorReportingEnabled;
@property(readonly, nonatomic) _Bool firebaseCrashlyticsEnabled;
- (id)initWithDictionary:(id)arg1;
@property(readonly, copy, nonatomic) NSString *interactivePromptAlwaysSendTitle;
@property(readonly, copy, nonatomic) NSString *interactivePromptCancelTitle;
@property(readonly, copy, nonatomic) NSString *interactivePromptMessage;
@property(readonly, copy, nonatomic) NSString *interactivePromptSendTitle;
@property(readonly, copy, nonatomic) NSString *interactivePromptTitle;
@property(readonly, nonatomic) unsigned int logBufferSize;
@property(readonly, nonatomic) unsigned int maxCustomExceptions;
@property(readonly, nonatomic) unsigned int maxCustomKeys;
- (id)promptValueForSettingsKey:(id)arg1 withLocalizedKey:(id)arg2 defaultValue:(id)arg3;
@property(readonly, copy, nonatomic) NSString *reportsEndpoint;
@property(readonly, nonatomic) NSDictionary *settingsDictionary; // @synthesize settingsDictionary=_settingsDictionary;
@property(readonly, nonatomic) _Bool shouldPackageReports;
@property(readonly, nonatomic) _Bool shouldSubmitReports;
@property(readonly, nonatomic) _Bool userPromptEnabled;
- (id)valueForConfigurationKey:(id)arg1;

@end

