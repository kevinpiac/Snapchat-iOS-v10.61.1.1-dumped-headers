//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCProfileChatMediaMediaCardAttribute : NSObject <NSCopying>
{
    BOOL _type;
    unsigned int _start;
    unsigned int _end;
    NSString *_url;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) unsigned int end; // @synthesize end=_end;
- (unsigned long long)hash;
- (id)initWithStart:(unsigned int)arg1 end:(unsigned int)arg2 type:(BOOL)arg3 url:(id)arg4;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) unsigned int start; // @synthesize start=_start;
@property(readonly, nonatomic) BOOL type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *url; // @synthesize url=_url;

@end

