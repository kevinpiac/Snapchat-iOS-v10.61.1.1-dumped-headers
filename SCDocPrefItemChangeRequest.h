//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDocObjectChangeRequest-Protocol.h"

@class NSData, NSString;

@interface SCDocPrefItemChangeRequest : NSObject <SCDocObjectChangeRequest>
{
    long long _rowid;
    int _requestType;
    BOOL _valType;
    BOOL _valByte;
    float _valFloat;
    NSString *_key;
    NSString *_nameGroup;
    long long _valInteger;
    unsigned long long _valUnsignedInteger;
    double _valDouble;
    NSData *_valFastCoded;
}

+ (id)changeRequestForDocPrefItem:(id)arg1;
+ (id)creationRequestWithDocPrefItem:(id)arg1;
+ (id)deletionRequestForDocPrefItem:(id)arg1;
- (void).cxx_destruct;
- (id)_docPrefItem;
- (void)createTableWithSQLite:(struct sqlite3 *)arg1;
- (id)initWithRowid:(long long)arg1 key:(id)arg2 nameGroup:(id)arg3 valType:(BOOL)arg4 valByte:(BOOL)arg5 valInteger:(long long)arg6 valUnsignedInteger:(unsigned long long)arg7 valFloat:(float)arg8 valDouble:(double)arg9 valFastCoded:(id)arg10;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(copy, nonatomic) NSString *nameGroup; // @synthesize nameGroup=_nameGroup;
@property(nonatomic) BOOL valByte; // @synthesize valByte=_valByte;
@property(nonatomic) double valDouble; // @synthesize valDouble=_valDouble;
@property(copy, nonatomic) NSData *valFastCoded; // @synthesize valFastCoded=_valFastCoded;
@property(nonatomic) float valFloat; // @synthesize valFloat=_valFloat;
@property(nonatomic) long long valInteger; // @synthesize valInteger=_valInteger;
@property(nonatomic) BOOL valType; // @synthesize valType=_valType;
@property(nonatomic) unsigned long long valUnsignedInteger; // @synthesize valUnsignedInteger=_valUnsignedInteger;
- (const char *)table;
- (id)transactWithSQLite:(struct SQLiteConnection *)arg1 flatbuffers:(struct FlatBufferBuilder *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
