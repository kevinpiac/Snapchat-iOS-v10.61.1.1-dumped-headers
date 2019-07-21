//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDocObjectChangeRequest-Protocol.h"

@class NSArray, NSString;

@interface SCSnapKitScopeChangeRequest : NSObject <SCDocObjectChangeRequest>
{
    long long _rowid;
    int _requestType;
    _Bool _toggleable;
    NSString *_name;
    NSArray *_descriptions;
    NSString *_iconURL;
}

+ (id)changeRequestForSnapKitScope:(id)arg1;
+ (id)creationRequestWithSnapKitScope:(id)arg1;
+ (id)deletionRequestForSnapKitScope:(id)arg1;
- (void).cxx_destruct;
- (id)_snapKitScope;
- (void)createTableWithSQLite:(struct sqlite3 *)arg1;
@property(copy, nonatomic) NSArray *descriptions; // @synthesize descriptions=_descriptions;
@property(copy, nonatomic) NSString *iconURL; // @synthesize iconURL=_iconURL;
- (id)initWithRowid:(long long)arg1 name:(id)arg2 toggleable:(_Bool)arg3 descriptions:(id)arg4 iconURL:(id)arg5;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) _Bool toggleable; // @synthesize toggleable=_toggleable;
- (const char *)table;
- (id)transactWithSQLite:(struct SQLiteConnection *)arg1 flatbuffers:(struct FlatBufferBuilder *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

