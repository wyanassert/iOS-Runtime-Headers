/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DuetActivityScheduler.framework/DuetActivityScheduler
 */

@interface _DASBudget : NSObject <NSCopying, NSSecureCoding> {
    unsigned char  _allocationType;
    double  _balance;
    id /* block */  _callback;
    double  _capacity;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    double  _maxBudgetValue;
    double  _minBudgetValue;
    NSString * _name;
}

@property (nonatomic, readonly) unsigned char allocationType;
@property (nonatomic, readonly) double balance;
@property (nonatomic, copy) id /* block */ callback;
@property (nonatomic, readonly) double capacity;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } lock;
@property (nonatomic) double maxBudgetValue;
@property (nonatomic) double minBudgetValue;
@property (nonatomic, readonly) NSString *name;

+ (id)budgetWithName:(id)arg1 capacity:(double)arg2 allocationType:(unsigned char)arg3;
+ (id)budgetWithName:(id)arg1 capacity:(double)arg2 balance:(double)arg3 allocationType:(unsigned char)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned char)allocationType;
- (double)balance;
- (id /* block */)callback;
- (double)capacity;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)decrementBy:(double)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (void)incrementBy:(double)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 capacity:(double)arg2 balance:(double)arg3 allocationType:(unsigned char)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isPositive;
- (struct os_unfair_lock_s { unsigned int x1; })lock;
- (double)maxBudgetValue;
- (double)minBudgetValue;
- (id)name;
- (void)registerSignificantBudgetChangeCallback:(id /* block */)arg1;
- (void)setBalance:(double)arg1;
- (void)setCallback:(id /* block */)arg1;
- (void)setCapacity:(double)arg1;
- (void)setLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setMaxBudgetValue:(double)arg1;
- (void)setMinBudgetValue:(double)arg1;
- (bool)unlockedDecrementBy:(double)arg1;

@end