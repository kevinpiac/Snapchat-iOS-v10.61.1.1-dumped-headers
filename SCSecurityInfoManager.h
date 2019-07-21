//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCAbuseWarningRepository-Protocol.h"

@class NSString;

@interface SCSecurityInfoManager : NSObject <SCAbuseWarningRepository>
{
    NSString *_abuseWarningMessageId;
    NSString *_abuseWarningMessage;
}

+ (id)path;
+ (id)shared;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *abuseWarningMessage; // @synthesize abuseWarningMessage=_abuseWarningMessage;
@property(retain, nonatomic) NSString *abuseWarningMessageId; // @synthesize abuseWarningMessageId=_abuseWarningMessageId;
- (void)clearAbuseWarning;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)saveState;
- (void)setAbuseWarningWithId:(id)arg1 message:(id)arg2;
- (void)setOptionalFromSoju:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

