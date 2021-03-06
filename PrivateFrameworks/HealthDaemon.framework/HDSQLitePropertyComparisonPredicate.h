/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDSQLitePropertyComparisonPredicate : HDSQLitePredicate <NSCopying> {
    int  _comparisonType;
    NSString * _lhObjectPropertyName;
    NSString * _rhObjectPropertyName;
}

@property (nonatomic, readonly) int comparisonType;
@property (nonatomic, readonly) NSString *lhObjectPropertyName;
@property (nonatomic, readonly) NSString *rhObjectPropertyName;

+ (id)predicateWithLeftHandObjectPropertyName:(id)arg1 rightHandObjectPropertyName:(id)arg2 comparisonType:(int)arg3;

- (void).cxx_destruct;
- (id)SQLForEntityClass:(Class)arg1;
- (id)_comparisonOperator;
- (int)comparisonType;
- (id)description;
- (id)lhObjectPropertyName;
- (id)rhObjectPropertyName;

@end
