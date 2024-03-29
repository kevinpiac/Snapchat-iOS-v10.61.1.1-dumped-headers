//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSString, UIColor;

@interface SCLogViewerLoggedEvent : NSObject
{
    NSString *_eventName;
    NSDate *_timestamp;
    NSDictionary *_parameters;
    long long _logType;
    UIColor *_textColor;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
- (id)initWithEvent:(id)arg1 parameters:(id)arg2 logType:(long long)arg3 textColor:(id)arg4;
@property(readonly, nonatomic) long long logType; // @synthesize logType=_logType;
@property(readonly, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
- (id)parametersString;
@property(readonly, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(readonly, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;

@end

