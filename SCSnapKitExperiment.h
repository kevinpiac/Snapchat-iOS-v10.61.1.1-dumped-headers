//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCDocObject.h"

#import "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface SCSnapKitExperiment : SCDocObject <NSCopying>
{
    NSString *_studyId;
    NSArray *_experimentSettings;
    long long _experimentId;
}

+ (id)immutableObjectParse:(const void *)arg1 bufferSize:(unsigned long long)arg2;
+ (struct SCDocObjectClassFunctionPointer)objectClassFunctionPointer;
+ (const char *)table;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) long long experimentId; // @synthesize experimentId=_experimentId;
@property(readonly, copy, nonatomic) NSArray *experimentSettings; // @synthesize experimentSettings=_experimentSettings;
- (unsigned long long)hash;
- (id)initWithStudyId:(id)arg1 experimentSettings:(id)arg2 experimentId:(long long)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *studyId; // @synthesize studyId=_studyId;

@end

