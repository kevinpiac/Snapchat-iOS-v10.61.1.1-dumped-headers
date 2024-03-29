//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMethodSignature;

@interface AspectIdentifier : NSObject
{
    SEL _selector;
    id _block;
    NSMethodSignature *_blockSignature;
    id _object;
    unsigned long long _options;
}

+ (id)identifierWithSelector:(SEL)arg1 object:(id)arg2 options:(unsigned long long)arg3 block:(id)arg4 error:(id *)arg5;
- (void).cxx_destruct;
@property(retain, nonatomic) id block; // @synthesize block=_block;
@property(retain, nonatomic) NSMethodSignature *blockSignature; // @synthesize blockSignature=_blockSignature;
- (id)description;
- (_Bool)invokeWithInfo:(id)arg1;
@property(nonatomic) __weak id object; // @synthesize object=_object;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
- (_Bool)remove;
@property(nonatomic) SEL selector; // @synthesize selector=_selector;

@end

