//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EGOCipher, NSString;

@interface EGOCipherStatement : NSObject
{
    EGOCipher *_database;
    struct sqlcph3_stmt *_stmt;
    NSString *_sql;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithDatabase:(id)arg1 SQL:(id)arg2;
- (void)resetAndClearBindings;
@property(readonly, nonatomic) NSString *sql; // @synthesize sql=_sql;
@property(readonly, nonatomic) struct sqlcph3_stmt *stmt; // @synthesize stmt=_stmt;

@end

