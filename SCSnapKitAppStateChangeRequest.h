//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDocObjectChangeRequest-Protocol.h"

@class NSArray, NSString, SCSnapKitAppStoryMetadata;

@interface SCSnapKitAppStateChangeRequest : NSObject <SCDocObjectChangeRequest>
{
    long long _rowid;
    int _requestType;
    NSString *_applicationId;
    SCSnapKitAppStoryMetadata *_appStoryMetadata;
    NSString *_applicationName;
    NSString *_applicationIconURL;
    NSArray *_scopesApproved;
}

+ (id)changeRequestForSnapKitAppState:(id)arg1;
+ (id)creationRequestWithSnapKitAppState:(id)arg1;
+ (id)deletionRequestForSnapKitAppState:(id)arg1;
- (void).cxx_destruct;
- (id)_snapKitAppState;
@property(copy, nonatomic) SCSnapKitAppStoryMetadata *appStoryMetadata; // @synthesize appStoryMetadata=_appStoryMetadata;
@property(copy, nonatomic) NSString *applicationIconURL; // @synthesize applicationIconURL=_applicationIconURL;
@property(copy, nonatomic) NSString *applicationId; // @synthesize applicationId=_applicationId;
@property(copy, nonatomic) NSString *applicationName; // @synthesize applicationName=_applicationName;
- (void)createTableWithSQLite:(struct sqlite3 *)arg1;
- (id)initWithRowid:(long long)arg1 applicationId:(id)arg2 appStoryMetadata:(id)arg3 applicationName:(id)arg4 applicationIconURL:(id)arg5 scopesApproved:(id)arg6;
@property(copy, nonatomic) NSArray *scopesApproved; // @synthesize scopesApproved=_scopesApproved;
- (const char *)table;
- (id)transactWithSQLite:(struct SQLiteConnection *)arg1 flatbuffers:(struct FlatBufferBuilder *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

